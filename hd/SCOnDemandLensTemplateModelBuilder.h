//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SOJUUnlockablesOndemandTemplateCategory;

@interface SCOnDemandLensTemplateModelBuilder : NSObject
{
    SOJUUnlockablesOndemandTemplateCategory *_templateCategory;
    long long _templateIndex;
}

+ (id)withOnDemandLensTemplateModel:(id)arg1;
- (void).cxx_destruct;
- (id)setTemplateIndex:(long long)arg1;
- (id)setTemplateCategory:(id)arg1;
- (id)build;

@end

