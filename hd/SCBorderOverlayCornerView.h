//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCShapeView.h"

@interface SCBorderOverlayCornerView : SCShapeView
{
    unsigned long long _corner;
}

@property(readonly, nonatomic) unsigned long long corner; // @synthesize corner=_corner;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 corner:(unsigned long long)arg2;

@end
