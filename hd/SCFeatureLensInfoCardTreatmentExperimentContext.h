//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCFeatureLensInfoCardTreatmentExperimentContext : SCExperimentContext
{
    _Bool _infoButtonTopLeft;
    _Bool _attributionEnabled;
    _Bool _infoCardV2Enabled;
}

@property(nonatomic) _Bool infoCardV2Enabled; // @synthesize infoCardV2Enabled=_infoCardV2Enabled;
@property(nonatomic) _Bool attributionEnabled; // @synthesize attributionEnabled=_attributionEnabled;
@property(nonatomic) _Bool infoButtonTopLeft; // @synthesize infoButtonTopLeft=_infoButtonTopLeft;
- (void)setupParameters;
- (id)experimentName;

@end
