//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureLensDataProviderFactory.h"

@interface SCFeatureLensDataProviderFactoryImpl : SCFeature <SCFeatureLensDataProviderFactory>
{
    id <SCLensCameraScreenDataProviderProtocol> _lensCameraScreenDataProvider;
    id <SCLensUserSessionLifeCycleNotifier> _lensUserSessionLifeCycleNotifier;
}

- (void).cxx_destruct;
- (id)_commonLensDataProviderWithDevicePosition:(long long)arg1 categoryIds:(id)arg2;
- (id)lensDataProviderForSnap3DLensInFilterCarousel;
- (id)initWithLensCameraScreenDataProvider:(id)arg1 lensUserSessionLifeCycleNotifier:(id)arg2;

@end

