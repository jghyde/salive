<?php

/**
 * @file
 * Default theme implementation to format an HTML mail.
 *
 * Copy this file in your default theme folder to create a custom themed mail.
 * Rename it to mimemail-message--[module]--[key].tpl.php to override it for a
 * specific mail.
 *
 * Available variables:
 * - $recipient: The recipient of the message
 * - $subject: The message subject
 * - $body: The message body
 * - $css: Internal style sheets
 * - $module: The sending module
 * - $key: The message identifier
 *
 * @see template_preprocess_mimemail_message()
 */
?>
<html>
  <head>
    <?php if ($css): ?>
    <style type="text/css">
      <!--
      <?php print $css ?>
      -->
    </style>
    <?php endif; ?>
  </head>
  <body style="margin: 0; background-color: #efefef;" id="mimemail-body" <?php if ($module && $key): print 'class="'. $module .'-'. $key .'"'; endif; ?>>
    <div id="outlook" style="height: 100%; width: 100%; margin: 0;">
      <div id="main" style="padding: 10px; width: 728px; background-color: #ffffff; margin: 0 auto;">
        <?php print $body ?>
      </div>
    </div>
  </body>
</html>
