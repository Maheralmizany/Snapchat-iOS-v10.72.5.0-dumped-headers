//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCGroupInviteViewExperimentContext : SCExperimentContext
{
    _Bool _shouldEnableGroupInviteView;
    _Bool _shouldEnableGroupInviteViewInChat;
    _Bool _shouldEnableStickerTooltip;
}

@property(readonly, nonatomic) _Bool shouldEnableStickerTooltip; // @synthesize shouldEnableStickerTooltip=_shouldEnableStickerTooltip;
@property(readonly, nonatomic) _Bool shouldEnableGroupInviteViewInChat; // @synthesize shouldEnableGroupInviteViewInChat=_shouldEnableGroupInviteViewInChat;
@property(readonly, nonatomic) _Bool shouldEnableGroupInviteView; // @synthesize shouldEnableGroupInviteView=_shouldEnableGroupInviteView;
- (void)setupParameters;
- (id)experimentName;

@end

