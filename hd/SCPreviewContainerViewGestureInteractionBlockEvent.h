//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCFeatureInteractionBlockEvent.h"

@class UIGestureRecognizer;

@interface SCPreviewContainerViewGestureInteractionBlockEvent : NSObject <SCFeatureInteractionBlockEvent>
{
    UIGestureRecognizer *_gestureRecognizer;
}

+ (id)createWithGestureRecognizer:(id)arg1;
@property(retain, nonatomic) UIGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (void).cxx_destruct;
- (_Bool)shouldBlockEventForFeature:(id)arg1;
- (id)initWithGestureRecognizer:(id)arg1;

@end
