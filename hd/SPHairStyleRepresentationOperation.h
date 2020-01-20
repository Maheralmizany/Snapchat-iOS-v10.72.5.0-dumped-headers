//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "SPCancellationToken.h"

@class FSTargetSegmentationResult, NSArray, NSError, NSString, SPProcessorsManager;

@interface SPHairStyleRepresentationOperation : NSOperation <SPCancellationToken>
{
    FSTargetSegmentationResult *_segmentationResult;
    unsigned long long _gender;
    SPProcessorsManager *_processorsManager;
    id <SPStringsProvider> _stringsProvider;
    NSArray *_hairStyles;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSArray *hairStyles; // @synthesize hairStyles=_hairStyles;
@property(retain, nonatomic) id <SPStringsProvider> stringsProvider; // @synthesize stringsProvider=_stringsProvider;
@property(retain, nonatomic) SPProcessorsManager *processorsManager; // @synthesize processorsManager=_processorsManager;
- (void).cxx_destruct;
- (id)_generateErrorFromException:(const struct exception *)arg1;
- (id)_hairStyleRepresentationForSegmentationResult:(id)arg1 gender:(unsigned long long)arg2 style:(id)arg3 hairSelectionManager:(id)arg4;
- (void)main;
- (void)setupSegmentationResult:(id)arg1 gender:(unsigned long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
