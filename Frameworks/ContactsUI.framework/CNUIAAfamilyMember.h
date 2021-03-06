/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIAAfamilyMember : NSObject <NSSecureCoding> {
    NSString * _appleID;
    NSString * _firstName;
    BOOL  _isMe;
    NSString * _lastName;
}

@property (nonatomic, copy) NSString *appleID;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic) BOOL isMe;
@property (nonatomic, copy) NSString *lastName;

+ (id)cnuiFamilyMemberWithAAFamilyMember:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appleID;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (id)initWithCoder:(id)arg1;
- (BOOL)isMe;
- (id)lastName;
- (void)setAppleID:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setIsMe:(BOOL)arg1;
- (void)setLastName:(id)arg1;

@end
