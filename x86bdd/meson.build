project('x86bdd', ['c', 'cpp'], default_options: ['warning_level=1', 'buildtype=release'])

fadec = subproject('fadec')
fadec_encode2 = fadec.get_variable('fadec_encode2_public')
fadec_lib = fadec.get_variable('fadec')

cudd = subproject('cudd').get_variable('cudd_dep')

go = find_program('go')
geniter = find_program('geniter.sh')

iter_inc = custom_target(
  'iter_inc',
  output: 'iter.inc',
  input: fadec_encode2,
  command: [geniter, '@INPUT@', '@OUTPUT@'],
)

genbdd = executable(
  'genbdd',
  sources: ['genbdd.cc', iter_inc],
  dependencies: [fadec_lib, cudd],
)
