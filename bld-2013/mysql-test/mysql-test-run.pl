#!/usr/bin/perl
# Call mtr in out-of-source build
$ENV{MTR_BINDIR} = 'D:/mysql/mysql-5.6.24/bld-2013';
chdir('D:/mysql/mysql-5.6.24/mysql-test');
exit(system($^X, 'D:/mysql/mysql-5.6.24/mysql-test/mysql-test-run.pl', @ARGV) >> 8);
