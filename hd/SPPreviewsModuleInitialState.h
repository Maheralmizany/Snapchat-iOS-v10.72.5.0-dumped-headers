//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPModuleInitialState.h"

@class NSString, SPPersonsSource, SPPreviewsDebugParams, SPPreviewsModuleSettings;

@interface SPPreviewsModuleInitialState : NSObject <SPModuleInitialState>
{
    NSString *_query;
    SPPersonsSource *_personsSource;
    SPPreviewsDebugParams *_debugParams;
    SPPreviewsModuleSettings *_moduleSettings;
}

@property(readonly, nonatomic) SPPreviewsModuleSettings *moduleSettings; // @synthesize moduleSettings=_moduleSettings;
@property(readonly, nonatomic) SPPreviewsDebugParams *debugParams; // @synthesize debugParams=_debugParams;
@property(readonly, nonatomic) SPPersonsSource *personsSource; // @synthesize personsSource=_personsSource;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (id)initWithQuery:(id)arg1 personsSource:(id)arg2 moduleSettings:(id)arg3 debugParams:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
