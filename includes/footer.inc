<?php

/* $Id$*/

echo '<table width="100%" id="footer" class="selection">';

echo '<tr>';
echo '<td style="width:33%"></td><td class="footer">';
echo '<img src="'. $rootpath . '/' . $_SESSION['LogoFile'] . '" width="120" alt="webERP" title="webERP" /></td>';
echo '<td class="footer" style="text-align: right;width:33%">'.(strftime('%A')).', '.(date($_SESSION['DefaultDateFormat']).' | '.(strftime(($DefaultClock==12) ? '%I:%M %p' : '%H:%M'))).'</td>';

echo '</tr>';

echo '<tr><td colspan="3" class="footer">webERP v' . $_SESSION['VersionNumber'] .'</td></tr>';

//	if(http_file_exists('http://sflogo.sourceforge.net/sflogo.php')) {
//		echo '<tr><td class="footer"><a href="https://sourceforge.net/projects/weberp"><img src="http://sflogo.sourceforge.net/sflogo.php?group_id=391629&amp;type=12" width="120" height="30" border="0" alt="Get webERP web-based ERP Accounting at SourceForge.net. Fast, secure and Free Open Source software downloads" /></a></td></tr>';
//	}

echo '</table>';

echo '</body>';
echo '</html>';
?>