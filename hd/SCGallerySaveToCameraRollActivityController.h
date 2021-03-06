//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, NSString, SCGalleryActivityProgressController;

@interface SCGallerySaveToCameraRollActivityController : NSObject
{
    NSArray *_activityItemProviders;
    CDUnknownBlockType _completion;
    SCGalleryActivityProgressController *_activityProgressController;
    NSError *_error;
    NSString *_errorSource;
    _Bool _saving;
    _Bool _succeeded;
    _Bool _cancelled;
    _Bool _finished;
}

- (void).cxx_destruct;
- (void)_complete;
- (void)_saveAtIndex:(unsigned long long)arg1;
- (void)saveWithActivityItemProviders:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

