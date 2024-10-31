project('cudd', ['c', 'cpp'], meson_version: '>=0.57.0')

srcs = [
  'cudd/cuddAddAbs.c',
  'cudd/cuddAddApply.c',
  'cudd/cuddAddFind.c',
  'cudd/cuddAddInv.c',
  'cudd/cuddAddIte.c',
  'cudd/cuddAddNeg.c',
  'cudd/cuddAddWalsh.c',
  'cudd/cuddAndAbs.c',
  'cudd/cuddAnneal.c',
  'cudd/cuddApa.c',
  'cudd/cuddAPI.c',
  'cudd/cuddApprox.c',
  'cudd/cuddBddAbs.c',
  'cudd/cuddBddCorr.c',
  'cudd/cuddBddIte.c',
  'cudd/cuddBridge.c',
  'cudd/cuddCache.c',
  'cudd/cuddCheck.c',
  'cudd/cuddClip.c',
  'cudd/cuddCof.c',
  'cudd/cuddCompose.c',
  'cudd/cuddDecomp.c',
  'cudd/cuddEssent.c',
  'cudd/cuddExact.c',
  'cudd/cuddExport.c',
  'cudd/cuddGenCof.c',
  'cudd/cuddGenetic.c',
  'cudd/cuddGroup.c',
  'cudd/cuddHarwell.c',
  'cudd/cuddInit.c',
  'cudd/cuddInteract.c',
  'cudd/cuddLCache.c',
  'cudd/cuddLevelQ.c',
  'cudd/cuddLinear.c',
  'cudd/cuddLiteral.c',
  'cudd/cuddMatMult.c',
  'cudd/cuddPriority.c',
  'cudd/cuddRead.c',
  'cudd/cuddRef.c',
  'cudd/cuddReorder.c',
  'cudd/cuddSat.c',
  'cudd/cuddSign.c',
  'cudd/cuddSolve.c',
  'cudd/cuddSplit.c',
  'cudd/cuddSubsetHB.c',
  'cudd/cuddSubsetSP.c',
  'cudd/cuddSymmetry.c',
  'cudd/cuddTable.c',
  'cudd/cuddUtil.c',
  'cudd/cuddWindow.c',
  'cudd/cuddZddCount.c',
  'cudd/cuddZddFuncs.c',
  'cudd/cuddZddGroup.c',
  'cudd/cuddZddIsop.c',
  'cudd/cuddZddLin.c',
  'cudd/cuddZddMisc.c',
  'cudd/cuddZddPort.c',
  'cudd/cuddZddReord.c',
  'cudd/cuddZddSetop.c',
  'cudd/cuddZddSymm.c',
  'cudd/cuddZddUtil.c',
  'cplusplus/cuddObj.cc',
]

run_command('autoreconf', check: true)

mod = import('unstable-external_project')
cudd = mod.add_project('configure',
  configure_options : ['--enable-obj'],
  verbose: true)

cudd_dep = cudd.dependency('cudd')

# pub_includes = [include_directories('cudd'), include_directories('cplusplus')]
# priv_includes = [include_directories('util')]
#
# libcudd = static_library(
#   'cudd',
#   srcs,
#   include_directories: pub_includes + priv_includes,
# )
#
# cudd_dep = declare_dependency(
#   link_with: libcudd,
#   include_directories: pub_includes,
# )
