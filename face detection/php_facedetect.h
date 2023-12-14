#ifndef PHP_FACEDETECT_H
#define PHP_FACEDETECT_H

#define PHP_FACEDETECT_VERSION "1.1.0"
#define PHP_FACEDETECT_EXTNAME "facedetect"

#ifdef ZTS
# include "TSRM.h"
#endif

PHP_MINFO_FUNCTION(facedetect);

PHP_FUNCTION(face_detect);
PHP_FUNCTION(face_count);

extern zend_module_entry facedetect_module_entry;
#define phpext_facedetect_ptr &facedetect_module_entry

#endif

