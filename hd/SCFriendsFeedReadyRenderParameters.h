//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCFriendsFeedReadyRenderContent;

@interface SCFriendsFeedReadyRenderParameters : NSObject <NSCopying>
{
    double _renderTime;
    SCFriendsFeedReadyRenderContent *_renderContent;
}

@property(readonly, copy, nonatomic) SCFriendsFeedReadyRenderContent *renderContent; // @synthesize renderContent=_renderContent;
@property(readonly, nonatomic) double renderTime; // @synthesize renderTime=_renderTime;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRenderTime:(double)arg1 renderContent:(id)arg2;

@end

