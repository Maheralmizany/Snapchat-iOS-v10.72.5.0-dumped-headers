//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCUserProperties_DEPRECATED, SCUserSession;

@interface SCGalleryOnboardingManager : NSObject
{
    SCUserSession *_userSession;
    SCUserProperties_DEPRECATED *_userProperties;
}

- (void).cxx_destruct;
- (void)didFinishShowOnboardingForAutoEnableGallery;
- (void)autoEnableGalleryIfNeeded;
- (_Bool)shouldShowOnboarding;
- (id)initWithUserSession:(id)arg1;

@end

