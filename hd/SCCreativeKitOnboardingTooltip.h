//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOnboardingTooltip.h"

@interface SCCreativeKitOnboardingTooltip : SCOnboardingTooltip
{
    id <SCUserTooltipProviding> _userTooltipProvider;
    unsigned long long _position;
}

- (void).cxx_destruct;
- (id)_tooltipTextFont;
- (id)_tooltipBackgroundColor;
- (id)_tooltipTextColor;
- (id)_tooltipText;
- (id)_tooltipAppearance;
- (void)markCompleted;
- (_Bool)needsToBeCompleted;
- (void)willShow;
- (void)setUserTooltipProvider:(id)arg1;
- (id)initWithParentView:(id)arg1 userTooltipProvider:(id)arg2 position:(unsigned long long)arg3;

@end
