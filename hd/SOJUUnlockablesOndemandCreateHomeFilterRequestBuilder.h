//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, SOJUUnlockablesOndemandHomeFilterAddress, SOJUUnlockablesOndemandHomeFilterTargeting;

@interface SOJUUnlockablesOndemandCreateHomeFilterRequestBuilder : NSObject
{
    NSString *_adAccountId;
    NSNumber *_isEnabled;
    SOJUUnlockablesOndemandHomeFilterAddress *_address;
    NSString *_assetBase64Str;
    NSString *_assetName;
    NSString *_templateId;
    NSString *_templateInstanceId;
    NSString *_categoryId;
    NSString *_categoryName;
    SOJUUnlockablesOndemandHomeFilterTargeting *_targeting;
}

+ (id)withJUUnlockablesOndemandCreateHomeFilterRequest:(id)arg1;
- (void).cxx_destruct;
- (id)setTargeting:(id)arg1;
- (id)setCategoryName:(id)arg1;
- (id)setCategoryId:(id)arg1;
- (id)setTemplateInstanceId:(id)arg1;
- (id)setTemplateId:(id)arg1;
- (id)setAssetName:(id)arg1;
- (id)setAssetBase64Str:(id)arg1;
- (id)setAddress:(id)arg1;
- (id)setIsEnabled:(id)arg1;
- (id)setAdAccountId:(id)arg1;
- (id)build;
- (id)setIsEnabledValue:(_Bool)arg1;

@end

