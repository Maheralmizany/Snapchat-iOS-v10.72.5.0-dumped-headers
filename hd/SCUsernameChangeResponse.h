//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@interface SCUsernameChangeResponse : NSObject
{
    _Bool _success;
    _Bool _isBadRequest;
    _Bool _isErrorResponse;
    _Bool _needsReauth;
    NSError *_errorResponse;
}

@property(retain, nonatomic) NSError *errorResponse; // @synthesize errorResponse=_errorResponse;
@property(nonatomic) _Bool needsReauth; // @synthesize needsReauth=_needsReauth;
@property(nonatomic) _Bool isErrorResponse; // @synthesize isErrorResponse=_isErrorResponse;
@property(nonatomic) _Bool isBadRequest; // @synthesize isBadRequest=_isBadRequest;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;

@end

