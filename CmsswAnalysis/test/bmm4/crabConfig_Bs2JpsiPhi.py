from CRABClient.UserUtilities import config, getUsernameFromSiteDB
config = config()

#config.General.requestName = 'BMM4_crabtest_Charmonium_Run2015B'
config.General.requestName = 'BMM4_BsToJpsiPhi_MC_8Tev'
#config.General.requestName = 'BMM4_BdToJpsiKstar_MC_13Tev'
config.General.workArea = 'crab_projects'
config.General.transferOutputs = True
config.General.transferLogs = False

config.JobType.pluginName = 'Analysis'
#config.JobType.psetName = 'testData_Bs2JpsiPhi.py'         # change it to your preferred BMM4 config file
config.JobType.psetName = 'testMc_Bs2JpsiPhi.py' 
config.JobType.outputFiles = ['output.root']    # Must match the output file name in your config, those files get transferred to your output destination

#config.Data.inputDataset = '/Charmonium/Run2015B-PromptReco-v1/AOD' # Datatset name you want to run on
config.Data.inputDataset = '/BsToJpsiPhi_BFilter_TuneCUEP8M1_13TeV-pythia8-evtgen/RunIISpring15DR74-Asympt25ns_MCRUN2_74_V9-v1/AODSIM'
#config.Data.inputDataset = '/BdToJpsiKstar_BFilter_TuneCUEP8M1_13TeV-pythia8-evtgen/RunIISpring15DR74-Asympt25ns_MCRUN2_74_V9-v1/AODSIM'

config.Data.inputDBS = 'global'
config.Data.splitting = 'LumiBased'
config.Data.unitsPerJob = 20
#config.Data.lumiMask = 'https://cms-service-dqm.web.cern.ch/cms-service-dqm/CAF/certification/Collisions12/8TeV/Prompt/Cert_190456-208686_8TeV_PromptReco_Collisions12_JSON.txt'
#config.Data.runRange = '193093-193999' # '193093-194075'
config.Data.outLFNDirBase = '/store/user/%s/' % (getUsernameFromSiteDB())
config.Data.publication = False
#config.Data.publishDataName = 'CRAB3_BMM4_crabtest_Charmonium_Run2015B'

config.Site.storageSite = 'T2_US_Nebraska'  # Your output destination. Useful to us: T2_CH_CSCS, T3_CH_PSI, T2_US_Nebraska

