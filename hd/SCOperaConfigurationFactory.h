//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaConfigurationFactoryProtocol.h"

@class NSString, SCExperimentManager;

@interface SCOperaConfigurationFactory : NSObject <SCOperaConfigurationFactoryProtocol>
{
    id <SCWebBrowsingURLChecker> _safeBrowsingChecker;
    id <SCOperaRemoteVideoPropertiesProvider> _operaRemoteVideoPropertiesProvider;
    id <SCOperaDeviceOrientationMonitor> _operaDeviceOrientationMonitor;
    id <SCOperaGlobalConfiguration> _operaGlobalConfiguration;
    id <SCLensExplorerLensUnlockerProtocol> _lensExplorerUnlocker;
    SCExperimentManager *_experimentManager;
}

- (void).cxx_destruct;
- (id)configurationWithOperaViewModel:(id)arg1;
- (id)initWithSafeBrowsingChecker:(id)arg1 operaRemoteVideoPropertiesProvider:(id)arg2 operaDeviceOrientationMonitor:(id)arg3 operaGlobalConfiguration:(id)arg4 lensExplorerUnlocker:(id)arg5 experimentManager:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
