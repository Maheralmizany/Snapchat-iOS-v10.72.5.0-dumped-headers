//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SCSnapchatter;

@interface SCSnapchatterOpenMiniProfileWithSnapchatterActionDataModelBuilder : NSObject
{
    SCSnapchatter *_snapchatter;
    NSArray *_requestContexts;
    long long _pageType;
    long long _addSourceType;
    long long _viewLocaton;
    _Bool _preventRecursiveOptions;
}

+ (id)snapchatterOpenMiniProfileWithSnapchatterActionDataModelFromExistingSnapchatterOpenMiniProfileWithSnapchatterActionDataModel:(id)arg1;
+ (id)snapchatterOpenMiniProfileWithSnapchatterActionDataModel;
- (void).cxx_destruct;
- (id)withPreventRecursiveOptions:(_Bool)arg1;
- (id)withViewLocaton:(long long)arg1;
- (id)withAddSourceType:(long long)arg1;
- (id)withPageType:(long long)arg1;
- (id)withRequestContexts:(id)arg1;
- (id)withSnapchatter:(id)arg1;
- (id)build;

@end

