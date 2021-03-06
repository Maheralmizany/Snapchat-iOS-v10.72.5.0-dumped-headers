//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCImageProcessLensCommandLoadEffectAction.h"

@class SCImageProcessLensCommandMetadata;

@interface SCImageProcessLensCommandLoadSpectaclesEffectAction : SCImageProcessLensCommandLoadEffectAction
{
    SCImageProcessLensCommandMetadata *_metadata;
    id <SCPerforming> _performer;
}

@property(readonly, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
@property(readonly, nonatomic) SCImageProcessLensCommandMetadata *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
- (_Bool)executeWithTrackingComponent:(id)arg1 effectComponent:(id)arg2 motionComponent:(id)arg3 depthComponent:(id)arg4 sixDofComponent:(id)arg5 command:(id)arg6 error:(id *)arg7;
- (id)initWithLensEffectDescriptorContainer:(id)arg1 metadata:(id)arg2 lensLogger:(id)arg3 performer:(id)arg4;

@end

