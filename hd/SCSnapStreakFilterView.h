//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOverlayFilterView.h"

@class UILabel, UIView;

@interface SCSnapStreakFilterView : SCOverlayFilterView
{
    UIView *_streakView;
    UILabel *_streakLabel;
    long long _streakCount;
}

@property(nonatomic) long long streakCount; // @synthesize streakCount=_streakCount;
- (void).cxx_destruct;
- (id)displayName;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2 userSession:(id)arg3;

@end

