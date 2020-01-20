//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCGallerySnapsTabDataSourceDelegate.h"

@class NSString, SCGalleryMomentClustererOption, SCGallerySnapsTabDataSource, SCUserSession, SOJUScannableScannableAction;

@interface SCSpectaclesScanCardProvider : NSObject <SCGallerySnapsTabDataSourceDelegate>
{
    id <SCSpectaclesScanCardProviderDelegate> _delegate;
    SCUserSession *_userSession;
    SOJUScannableScannableAction *_scannableAction;
    NSString *_scanData;
    NSString *_scannableId;
    long long _codeType;
    int _version;
    long long _pageType;
    long long _scanSource;
    SCGallerySnapsTabDataSource *_galleryDataSource;
    SCGalleryMomentClustererOption *_newportOption;
}

+ (_Bool)shouldHandleScannableActions:(id)arg1;
+ (id)_openUrlFromScannableActions:(id)arg1;
+ (id)_vrCardWithScannableAction:(id)arg1 scanData:(id)arg2 scannableId:(id)arg3 version:(int)arg4 userSession:(id)arg5 scanSource:(long long)arg6;
+ (id)_emptyStateCard;
- (void).cxx_destruct;
- (void)gallerySnapsTabDataSource:(id)arg1 didUpdateFeaturedStoriesViewModel:(id)arg2;
- (void)gallerySnapsTabDataSource:(id)arg1 didUpdateLoadingStatus:(_Bool)arg2;
- (void)gallerySnapsTabDataSourceDidCompleteClusterSnaps:(id)arg1;
- (void)gallerySnapsTabDataSource:(id)arg1 didUpdateMomentViewModels:(id)arg2;
- (void)_logScanEventIsVRContentsAvailable:(_Bool)arg1;
- (void)provideScanCard;
- (id)initWithDelegate:(id)arg1 userSession:(id)arg2 scannableActions:(id)arg3 scanData:(id)arg4 scannableId:(id)arg5 codeType:(long long)arg6 version:(int)arg7 pageType:(long long)arg8 scanSource:(long long)arg9;

@end
