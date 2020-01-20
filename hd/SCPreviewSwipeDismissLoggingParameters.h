//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCPreviewSwipeDismissLoggingParameters : NSObject
{
    _Bool _didDismiss;
    _Bool _snapsterpieceAlertDidAppear;
    double _gestureStartTime;
    double _gestureEndTime;
    NSString *_analyticsVersion;
    struct CGPoint _startCoordinate;
    struct CGPoint _endCoordinate;
}

@property(readonly, nonatomic) NSString *analyticsVersion; // @synthesize analyticsVersion=_analyticsVersion;
@property(nonatomic) _Bool snapsterpieceAlertDidAppear; // @synthesize snapsterpieceAlertDidAppear=_snapsterpieceAlertDidAppear;
@property(nonatomic) _Bool didDismiss; // @synthesize didDismiss=_didDismiss;
@property(nonatomic) struct CGPoint endCoordinate; // @synthesize endCoordinate=_endCoordinate;
@property(nonatomic) struct CGPoint startCoordinate; // @synthesize startCoordinate=_startCoordinate;
@property(nonatomic) double gestureEndTime; // @synthesize gestureEndTime=_gestureEndTime;
@property(nonatomic) double gestureStartTime; // @synthesize gestureStartTime=_gestureStartTime;
- (void).cxx_destruct;
- (id)init;

@end
