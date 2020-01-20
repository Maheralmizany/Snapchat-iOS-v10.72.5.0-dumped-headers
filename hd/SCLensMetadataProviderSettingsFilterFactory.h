//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLensMetadataProviderSettings;

@interface SCLensMetadataProviderSettingsFilterFactory : NSObject
{
    SCLensMetadataProviderSettings *_settings;
}

+ (id)filterForCategoryIds:(id)arg1;
+ (id)filterForCameraPosition:(unsigned long long)arg1;
+ (id)filterForApplicableContexts:(id)arg1;
+ (id)filterForApplicableContext:(id)arg1;
- (void).cxx_destruct;
- (id)produceFilterForLensFilteredContainer:(id)arg1;
- (id)initWithMetadataProviderSettings:(id)arg1;

@end
