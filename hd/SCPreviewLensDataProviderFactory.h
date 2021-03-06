//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCPreviewLensDataProviderFactoryProtocol.h"

@class SCPreviewConfiguration, SCUserSession;

@interface SCPreviewLensDataProviderFactory : NSObject <SCPreviewLensDataProviderFactoryProtocol>
{
    SCUserSession *_userSession;
    SCPreviewConfiguration *_previewConfiguration;
}

- (void).cxx_destruct;
- (id)_commonLensDataProviderWithConfiguration:(id)arg1 devicePosition:(long long)arg2 categoryIds:(id)arg3;
- (id)lensDataProviderForLensInPreview;
- (id)lensDataProviderForSnap3DLensInFilterCarousel;
- (id)lensDataProviderForSpectaclesLensInFilterCarousel;
- (id)initWithUserSession:(id)arg1 previewConfiguration:(id)arg2;

@end

