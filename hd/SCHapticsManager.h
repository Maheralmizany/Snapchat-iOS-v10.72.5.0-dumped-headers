//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImpactFeedbackGenerator, UINotificationFeedbackGenerator, UISelectionFeedbackGenerator;

@interface SCHapticsManager : NSObject
{
    UIImpactFeedbackGenerator *_generatorImpactLight;
    UIImpactFeedbackGenerator *_generatorImpactMedium;
    UIImpactFeedbackGenerator *_generatorImpactHeavy;
    UISelectionFeedbackGenerator *_generatorSelection;
    UINotificationFeedbackGenerator *_generatorNotification;
}

+ (id)sharedManager;
@property(retain, nonatomic) UINotificationFeedbackGenerator *generatorNotification; // @synthesize generatorNotification=_generatorNotification;
@property(retain, nonatomic) UISelectionFeedbackGenerator *generatorSelection; // @synthesize generatorSelection=_generatorSelection;
@property(retain, nonatomic) UIImpactFeedbackGenerator *generatorImpactHeavy; // @synthesize generatorImpactHeavy=_generatorImpactHeavy;
@property(retain, nonatomic) UIImpactFeedbackGenerator *generatorImpactMedium; // @synthesize generatorImpactMedium=_generatorImpactMedium;
@property(retain, nonatomic) UIImpactFeedbackGenerator *generatorImpactLight; // @synthesize generatorImpactLight=_generatorImpactLight;
- (void).cxx_destruct;
- (void)hapticUserInteractionEnded;
- (void)hapticUserInteractionStarted;
- (void)performGatedFeedback:(long long)arg1;
- (void)_performFeedback:(long long)arg1;
- (void)performFeedback:(long long)arg1;
- (void)prepare;

@end

