//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCStickerPickerLayoutSource.h"

@class NSString, SCExperimentManager, SCStickerPickerLayoutSourceDefault;

@interface SCStickerPickerLayoutSourcePreview : NSObject <SCStickerPickerLayoutSource>
{
    SCStickerPickerLayoutSourceDefault *_defaultLayoutSource;
    SCExperimentManager *_experimentManager;
}

@property(readonly, nonatomic) SCExperimentManager *experimentManager; // @synthesize experimentManager=_experimentManager;
@property(readonly, nonatomic) SCStickerPickerLayoutSourceDefault *defaultLayoutSource; // @synthesize defaultLayoutSource=_defaultLayoutSource;
- (void).cxx_destruct;
- (long long)numberOfColumnsForSuperCategoryType:(long long)arg1;
- (id)initWithExperimentManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
