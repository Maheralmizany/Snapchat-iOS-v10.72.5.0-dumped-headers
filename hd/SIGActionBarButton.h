//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class SIGActionBarItem, SIGTargetActionDispatcher;

@interface SIGActionBarButton : UIControl
{
    SIGActionBarItem *_item;
    SIGTargetActionDispatcher *_userPressActionDispatcher;
}

+ (id)actionBarButtonWithItem:(id)arg1;
- (void).cxx_destruct;
- (void)_didPressButton;
- (struct CGSize)intrinsicContentSize;
- (id)initWithItem:(id)arg1;

@end

