project('fitsheader', 'c',
  version: '0.0',
)

src_lst = []
inc_lst = [
	include_directories('include'),
]
dep_lst = []

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