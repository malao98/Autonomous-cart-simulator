; Auto-generated. Do not edit!


(cl:in-package flatland_msgs-srv)


;//! \htmlinclude DeleteModel-request.msg.html

(cl:defclass <DeleteModel-request> (roslisp-msg-protocol:ros-message)
  ((name
    :reader name
    :initarg :name
    :type cl:string
    :initform ""))
)

(cl:defclass DeleteModel-request (<DeleteModel-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DeleteModel-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DeleteModel-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name flatland_msgs-srv:<DeleteModel-request> is deprecated: use flatland_msgs-srv:DeleteModel-request instead.")))

(cl:ensure-generic-function 'name-val :lambda-list '(m))
(cl:defmethod name-val ((m <DeleteModel-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader flatland_msgs-srv:name-val is deprecated.  Use flatland_msgs-srv:name instead.")
  (name m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DeleteModel-request>) ostream)
  "Serializes a message object of type '<DeleteModel-request>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'name))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'name))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DeleteModel-request>) istream)
  "Deserializes a message object of type '<DeleteModel-request>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'name) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'name) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DeleteModel-request>)))
  "Returns string type for a service object of type '<DeleteModel-request>"
  "flatland_msgs/DeleteModelRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DeleteModel-request)))
  "Returns string type for a service object of type 'DeleteModel-request"
  "flatland_msgs/DeleteModelRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DeleteModel-request>)))
  "Returns md5sum for a message object of type '<DeleteModel-request>"
  "d82dc6474dd88dad5e1615ab1b2ca74c")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DeleteModel-request)))
  "Returns md5sum for a message object of type 'DeleteModel-request"
  "d82dc6474dd88dad5e1615ab1b2ca74c")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DeleteModel-request>)))
  "Returns full string definition for message of type '<DeleteModel-request>"
  (cl:format cl:nil "string name~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DeleteModel-request)))
  "Returns full string definition for message of type 'DeleteModel-request"
  (cl:format cl:nil "string name~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DeleteModel-request>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'name))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DeleteModel-request>))
  "Converts a ROS message object to a list"
  (cl:list 'DeleteModel-request
    (cl:cons ':name (name msg))
))
;//! \htmlinclude DeleteModel-response.msg.html

(cl:defclass <DeleteModel-response> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil)
   (message
    :reader message
    :initarg :message
    :type cl:string
    :initform ""))
)

(cl:defclass DeleteModel-response (<DeleteModel-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DeleteModel-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DeleteModel-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name flatland_msgs-srv:<DeleteModel-response> is deprecated: use flatland_msgs-srv:DeleteModel-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <DeleteModel-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader flatland_msgs-srv:success-val is deprecated.  Use flatland_msgs-srv:success instead.")
  (success m))

(cl:ensure-generic-function 'message-val :lambda-list '(m))
(cl:defmethod message-val ((m <DeleteModel-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader flatland_msgs-srv:message-val is deprecated.  Use flatland_msgs-srv:message instead.")
  (message m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DeleteModel-response>) ostream)
  "Serializes a message object of type '<DeleteModel-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'message))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'message))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DeleteModel-response>) istream)
  "Deserializes a message object of type '<DeleteModel-response>"
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'message) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'message) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DeleteModel-response>)))
  "Returns string type for a service object of type '<DeleteModel-response>"
  "flatland_msgs/DeleteModelResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DeleteModel-response)))
  "Returns string type for a service object of type 'DeleteModel-response"
  "flatland_msgs/DeleteModelResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DeleteModel-response>)))
  "Returns md5sum for a message object of type '<DeleteModel-response>"
  "d82dc6474dd88dad5e1615ab1b2ca74c")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DeleteModel-response)))
  "Returns md5sum for a message object of type 'DeleteModel-response"
  "d82dc6474dd88dad5e1615ab1b2ca74c")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DeleteModel-response>)))
  "Returns full string definition for message of type '<DeleteModel-response>"
  (cl:format cl:nil "bool success~%string message~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DeleteModel-response)))
  "Returns full string definition for message of type 'DeleteModel-response"
  (cl:format cl:nil "bool success~%string message~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DeleteModel-response>))
  (cl:+ 0
     1
     4 (cl:length (cl:slot-value msg 'message))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DeleteModel-response>))
  "Converts a ROS message object to a list"
  (cl:list 'DeleteModel-response
    (cl:cons ':success (success msg))
    (cl:cons ':message (message msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'DeleteModel)))
  'DeleteModel-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'DeleteModel)))
  'DeleteModel-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DeleteModel)))
  "Returns string type for a service object of type '<DeleteModel>"
  "flatland_msgs/DeleteModel")