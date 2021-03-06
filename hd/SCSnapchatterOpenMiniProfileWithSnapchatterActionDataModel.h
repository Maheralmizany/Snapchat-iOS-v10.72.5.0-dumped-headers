//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, SCSnapchatter;

@interface SCSnapchatterOpenMiniProfileWithSnapchatterActionDataModel : NSObject <NSCopying>
{
    _Bool _preventRecursiveOptions;
    SCSnapchatter *_snapchatter;
    NSArray *_requestContexts;
    long long _pageType;
    long long _addSourceType;
    long long _viewLocaton;
}

@property(readonly, nonatomic) _Bool preventRecursiveOptions; // @synthesize preventRecursiveOptions=_preventRecursiveOptions;
@property(readonly, nonatomic) long long viewLocaton; // @synthesize viewLocaton=_viewLocaton;
@property(readonly, nonatomic) long long addSourceType; // @synthesize addSourceType=_addSourceType;
@property(readonly, nonatomic) long long pageType; // @synthesize pageType=_pageType;
@property(readonly, copy, nonatomic) NSArray *requestContexts; // @synthesize requestContexts=_requestContexts;
@property(readonly, copy, nonatomic) SCSnapchatter *snapchatter; // @synthesize snapchatter=_snapchatter;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnapchatter:(id)arg1 requestContexts:(id)arg2 pageType:(long long)arg3 addSourceType:(long long)arg4 viewLocaton:(long long)arg5 preventRecursiveOptions:(_Bool)arg6;

@end

