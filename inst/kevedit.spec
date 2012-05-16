%define name kevedit
%define version 0.5.1
%define release 1

Name: %{name}
Summary: Powerful ZZT Editing
Version: %{version}
Release: %{release}
URL: http://kevedit.sourceforge.net/
License: GPL
Packager: Ryan Phillips <bitman@users.sourceforge.net>
Group: Amusements/Games

Buildroot: %{_tmppath}/%{name}-%{version}-root
Source: %{name}-%{version}.tar.gz
Requires: SDL >= 1.2.0
BuildRequires: SDL-devel >= 1.2.0

%Description
KevEdit is a powerful editor for the ZZT game creation system.

%Prep
%setup -q -n %{name}-%{version}

%Build
%configure
make

%Install
%makeinstall

%Files
%doc README AUTHORS TODO COPYING ChangeLog
%{_bindir}/*
%{_datadir}/%{name}

%Clean
rm -rf $RPM_BUILD_ROOT

%ChangeLog
* Thu May 26 2005 bitman <bitman@users.sourceforge.net>
- version 0.5.1: Spec uses configure build system
* Wed Mar 27 2002 bitman <bitman@users.sourceforge.net>
- version 0.5.0: Created RPM spec file
