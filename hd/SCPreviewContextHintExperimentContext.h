//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCPreviewContextHintExperimentContext : SCExperimentContext
{
    _Bool _showCTAHint;
    _Bool _showCTAHintSendText;
}

@property(readonly, nonatomic) _Bool showCTAHintSendText; // @synthesize showCTAHintSendText=_showCTAHintSendText;
@property(readonly, nonatomic) _Bool showCTAHint; // @synthesize showCTAHint=_showCTAHint;
- (void)setupParameters;
- (id)experimentName;

@end

