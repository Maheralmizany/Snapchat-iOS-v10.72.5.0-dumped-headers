//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCNMdpCommonUIPageInfo;

@interface SCNMdpCommonRequestContext : NSObject
{
    float _importance;
    SCNMdpCommonUIPageInfo *_uiPageInfo;
}

+ (id)RequestContextWithUiPageInfo:(id)arg1 importance:(float)arg2;
@property(readonly, nonatomic) float importance; // @synthesize importance=_importance;
@property(readonly, nonatomic) SCNMdpCommonUIPageInfo *uiPageInfo; // @synthesize uiPageInfo=_uiPageInfo;
- (void).cxx_destruct;
- (id)description;
- (id)initWithUiPageInfo:(id)arg1 importance:(float)arg2;

@end

