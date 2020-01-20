//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCSpectaclesBoomboxExperimentContext : SCExperimentContext
{
    _Bool _enableBoombox;
    _Bool _enable2DCreativeTools;
    _Bool _enableScanSnapcode;
    _Bool _enableStabilization;
}

@property(readonly, nonatomic) _Bool enableStabilization; // @synthesize enableStabilization=_enableStabilization;
@property(readonly, nonatomic) _Bool enableScanSnapcode; // @synthesize enableScanSnapcode=_enableScanSnapcode;
@property(readonly, nonatomic) _Bool enable2DCreativeTools; // @synthesize enable2DCreativeTools=_enable2DCreativeTools;
@property(readonly, nonatomic) _Bool enableBoombox; // @synthesize enableBoombox=_enableBoombox;
- (void)setupParameters;
- (id)experimentName;

@end

