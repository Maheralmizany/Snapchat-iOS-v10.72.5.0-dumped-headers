//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCSendToShareSnapNewUserExperimentContext : SCExperimentContext
{
    _Bool _enableOnPreview;
    _Bool _enableOnSendToTopBar;
    _Bool _enableOnSendToMultiButton;
}

@property(readonly, nonatomic) _Bool enableOnSendToMultiButton; // @synthesize enableOnSendToMultiButton=_enableOnSendToMultiButton;
@property(readonly, nonatomic) _Bool enableOnSendToTopBar; // @synthesize enableOnSendToTopBar=_enableOnSendToTopBar;
@property(readonly, nonatomic) _Bool enableOnPreview; // @synthesize enableOnPreview=_enableOnPreview;
- (void)setupParameters;
- (id)experimentName;

@end

