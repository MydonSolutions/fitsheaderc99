project('fitsheader', 'c',
  version: '1.0',
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

lib_fitsheader = library(
  'fitsheader',
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

subdir('tests')