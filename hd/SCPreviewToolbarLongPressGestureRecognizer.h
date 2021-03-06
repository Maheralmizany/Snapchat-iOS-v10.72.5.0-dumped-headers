//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILongPressGestureRecognizer.h"

@interface SCPreviewToolbarLongPressGestureRecognizer : UILongPressGestureRecognizer
{
    double _sc_touchDuration;
    double _beginTouchTimestamp;
    double _touchTimestamp;
    struct CGPoint _sc_velocity;
    struct CGPoint _sc_translation;
    struct CGPoint _beginLocation;
    struct CGPoint _touchLocation;
}

@property(nonatomic) double touchTimestamp; // @synthesize touchTimestamp=_touchTimestamp;
@property(nonatomic) struct CGPoint touchLocation; // @synthesize touchLocation=_touchLocation;
@property(nonatomic) double beginTouchTimestamp; // @synthesize beginTouchTimestamp=_beginTouchTimestamp;
@property(nonatomic) struct CGPoint beginLocation; // @synthesize beginLocation=_beginLocation;
@property(nonatomic) double sc_touchDuration; // @synthesize sc_touchDuration=_sc_touchDuration;
@property(nonatomic) struct CGPoint sc_translation; // @synthesize sc_translation=_sc_translation;
@property(nonatomic) struct CGPoint sc_velocity; // @synthesize sc_velocity=_sc_velocity;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

