//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CADisplayLink;

@interface SCOperaScrollContentView : UIView
{
    CADisplayLink *_displayLink;
    _Bool _shouldSendRefreshDisplayUpdate;
    id <SCOperaScrollContentViewDelegate> _delegate;
}

@property(nonatomic) _Bool shouldSendRefreshDisplayUpdate; // @synthesize shouldSendRefreshDisplayUpdate=_shouldSendRefreshDisplayUpdate;
@property(nonatomic) __weak id <SCOperaScrollContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_displayLinkDidFire;
- (void)layoutSubviews;

@end
