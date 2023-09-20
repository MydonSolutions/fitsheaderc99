project('fitsheader', 'c',
  version: '1.1',
  default_options: [ 
    'buildtype=release',
    'werror=true'
  ]
)

cc = meson.get_compiler('c')
m_dep = cc.find_library('m', required : true)

src_lst = []
inc_lst = [
	include_directories('include'),
]
dep_lst = [
  m_dep,
]

subdir('include')
subdir('src')

if get_option('buildtype') == 'release'
  add_project_arguments('-Wno-stringop-truncation', language: 'c')
  add_project_arguments('-Wno-stringop-overflow', language: 'c')
  add_project_arguments('-Wno-format-overflow', language: 'c')
endif

lib_fitsheader = library(
  'fitsheaderc99',
  src_lst,
  include_directories: inc_lst,
  dependencies: dep_lst,
  install: true,
)

lib_fitsheader_dep = declare_dependency(
  include_directories: inc_lst,
  dependencies: dep_lst,
  link_with: lib_fitsheader,
)

pkg = import('pkgconfig')
pkg.generate(
  lib_fitsheader,
  libraries: dep_lst,
)

subdir('tests')
