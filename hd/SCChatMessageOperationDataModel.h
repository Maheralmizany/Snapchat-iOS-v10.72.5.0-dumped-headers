//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, SCChatMessageDataModel;

@interface SCChatMessageOperationDataModel : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_messageId_messageId;
    SCChatMessageDataModel *_messageDataModel_dataModel;
}

+ (id)messageIdWithMessageId:(id)arg1;
+ (id)messageDataModelWithDataModel:(id)arg1;
- (void).cxx_destruct;
- (void)matchMessageId:(CDUnknownBlockType)arg1 messageDataModel:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
