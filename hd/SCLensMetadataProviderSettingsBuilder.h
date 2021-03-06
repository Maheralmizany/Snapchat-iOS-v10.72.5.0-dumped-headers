//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SCLensApplicableContextAttribute;

@interface SCLensMetadataProviderSettingsBuilder : NSObject
{
    unsigned long long _cameraPosition;
    SCLensApplicableContextAttribute *_applicableContext;
    NSArray *_categoryIds;
}

+ (id)lensMetadataProviderSettingsFromExistingLensMetadataProviderSettings:(id)arg1;
+ (id)lensMetadataProviderSettings;
- (void).cxx_destruct;
- (id)withCategoryIds:(id)arg1;
- (id)withApplicableContext:(id)arg1;
- (id)withCameraPosition:(unsigned long long)arg1;
- (id)build;

@end

