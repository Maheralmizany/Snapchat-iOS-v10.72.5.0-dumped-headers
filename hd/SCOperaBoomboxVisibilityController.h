//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCOperaBoomboxVisibilityController : NSObject
{
    double _animationDuration;
    id <SCOperaPropertyUpdateModerator> _propertyUpdateModerator;
    double _lastRotation;
    _Bool _actionMenuVisible;
}

@property(nonatomic) _Bool actionMenuVisible; // @synthesize actionMenuVisible=_actionMenuVisible;
- (void).cxx_destruct;
- (void)updateVisibilityForRotation:(double)arg1 gravity:(double)arg2;
- (id)initWithAnimationDuration:(double)arg1 propertyUpdateModerator:(id)arg2;

@end

