//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSAttributedString, SCDiscoverFeedHeadlineViewLayoutConfiguration;

@interface SCDiscoverFeedWhiteSpaceHeadlineViewModel : NSObject <NSCopying>
{
    NSAttributedString *_title;
    SCDiscoverFeedHeadlineViewLayoutConfiguration *_headlineViewLayoutConfiguration;
    struct CGSize _maximumSize;
}

@property(readonly, copy, nonatomic) SCDiscoverFeedHeadlineViewLayoutConfiguration *headlineViewLayoutConfiguration; // @synthesize headlineViewLayoutConfiguration=_headlineViewLayoutConfiguration;
@property(readonly, nonatomic) struct CGSize maximumSize; // @synthesize maximumSize=_maximumSize;
@property(readonly, copy, nonatomic) NSAttributedString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 maximumSize:(struct CGSize)arg2 headlineViewLayoutConfiguration:(id)arg3;

@end

