//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCScanSourceInformationBuilder : NSObject
{
    long long _scanSource;
    long long _deeplinkSource;
    long long _page;
    _Bool _openFromPreview;
    _Bool _skipRecordInScanHistory;
    _Bool _openFromCameraRoll;
    _Bool _relaunchFromInformationIcon;
    _Bool _openFromScanHistory;
    _Bool _isLensPreview;
    long long _publicProfileScanUserAction;
}

+ (id)withScanSourceInformation:(id)arg1;
- (id)setPublicProfileScanUserAction:(long long)arg1;
- (id)setIsLensPreview:(_Bool)arg1;
- (id)setOpenFromScanHistory:(_Bool)arg1;
- (id)setRelaunchFromInformationIcon:(_Bool)arg1;
- (id)setOpenFromCameraRoll:(_Bool)arg1;
- (id)setSkipRecordInScanHistory:(_Bool)arg1;
- (id)setOpenFromPreview:(_Bool)arg1;
- (id)setPage:(long long)arg1;
- (id)setDeeplinkSource:(long long)arg1;
- (id)setScanSource:(long long)arg1;
- (id)build;

@end

