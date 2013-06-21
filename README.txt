The OSS SDK for PHP provides a library for developers working with Aliyun OSS.
Aliyun OSS is an open storage service provided by Aliyun Company which owned
by Alibaba Group.

Place the approprate version of the OSS SDK for PHP in the libraries directory
within the site you are working. That may be 'default' or 'all' like the
following: sites/all/libraries or sites/default/libraries. The end result after
extracting the library should be sites/.../libraries/osssdk/sdk.class.php.

Configuration
The OSS service credential can be configured by using self-provided form to
enter the oss access id and oss access secret.
The secret will be stored in variables: oss_key_id, oss_key_secret.

Usage
Simply call:
libraries_load('osssdk');
