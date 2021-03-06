//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCUserSessionScoped.h"

@class NSString, SCDDMLModelSpecAndParamsRecord, SCUserSession;

@interface SCDDMLRequestManager : NSObject <SCUserSessionScoped>
{
    id <SCPerforming> _performer;
    SCUserSession *_userSession;
    SCDDMLModelSpecAndParamsRecord *_cachedRecord;
}

- (void).cxx_destruct;
- (id)_urlForModelId:(id)arg1;
- (void)_predictGetModel:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_predictGetModel:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)readModelSpecAndParams:(id)arg1;
- (_Bool)_savePredictModelRecord:(id)arg1 id:(id)arg2;
- (void)_getAndSavePredictModel:(id)arg1;
- (void)getAndSavePredictModel:(id)arg1;
- (void)invalidate;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

