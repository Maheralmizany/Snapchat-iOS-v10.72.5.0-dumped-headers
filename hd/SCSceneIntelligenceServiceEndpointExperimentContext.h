//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCExperimentContext.h"

@class NSString;

@interface SCSceneIntelligenceServiceEndpointExperimentContext : SCExperimentContext
{
    NSString *_prodURL;
    NSString *_stagingURL;
    NSString *_devURL;
    NSString *_stagingRoutingHeader;
    NSString *_devRoutingHeader;
    NSString *_snapTokenAccessType;
}

@property(readonly, nonatomic) NSString *snapTokenAccessType; // @synthesize snapTokenAccessType=_snapTokenAccessType;
@property(readonly, nonatomic) NSString *devRoutingHeader; // @synthesize devRoutingHeader=_devRoutingHeader;
@property(readonly, nonatomic) NSString *stagingRoutingHeader; // @synthesize stagingRoutingHeader=_stagingRoutingHeader;
@property(readonly, nonatomic) NSString *devURL; // @synthesize devURL=_devURL;
@property(readonly, nonatomic) NSString *stagingURL; // @synthesize stagingURL=_stagingURL;
@property(readonly, nonatomic) NSString *prodURL; // @synthesize prodURL=_prodURL;
- (void).cxx_destruct;
- (void)setupParameters;
- (id)experimentName;

@end

