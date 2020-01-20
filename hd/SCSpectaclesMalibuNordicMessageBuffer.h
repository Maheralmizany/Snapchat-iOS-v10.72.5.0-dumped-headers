//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData;

@interface SCSpectaclesMalibuNordicMessageBuffer : NSObject
{
    NSMutableData *_requestBuffer;
    id <SCSpectaclesMalibuMessageBufferDelegate> _delegate;
}

@property(nonatomic) __weak id <SCSpectaclesMalibuMessageBufferDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableData *requestBuffer; // @synthesize requestBuffer=_requestBuffer;
- (void).cxx_destruct;
- (unsigned char)_tlvType;
- (unsigned long long)_tlvLength;
- (void)_parseBuffer;
- (void)processData:(id)arg1;
- (id)dataWithTlvHeaderPrepended:(id)arg1 messageType:(unsigned char)arg2;
- (id)initWithDelegate:(id)arg1;

@end
